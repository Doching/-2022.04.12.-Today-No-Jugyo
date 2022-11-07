from urllib.request import Request, urlopen
from bs4 import BeautifulSoup
import ssl
import os
import pandas as pd

context = ssl._create_unverified_context()
headers = {'User-Agent': 'Mozilla/5.0'}

url = 'https://news.naver.com/main/clusterArticles.naver?id=c_202204260850_00000001&mode=LSD&mid=shm&sid1=100&oid=056&aid=0011256180'
request = Request(url, headers=headers)
response = urlopen(request, context=context)
html = response.read()
soup = BeautifulSoup(html, 'html.parser')
result = soup.find_all('a', {'class': 'nclicks(cls_nav.clsart1)'}) # a 태그의 클래스가 nclicks(cls_nav.clsart1) 인 것만 검출
titles = []

for i in range(len(result)):
    title = result[i].text
    if len(title) < 10:
        continue
    titles.append(title)

print(titles)
data = pd.DataFrame({'title': titles})
data.to_csv('../data/titles.csv', encoding='utf-8')