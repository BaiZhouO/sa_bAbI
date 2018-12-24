# TIPS:
写完generate.py后用批处理文件运行时注意，文件是放在docker-compose空间里的，需要用  
1.docker-compose down  
2.docker-compose up  
3.docker-compose build  
4.再执行sa_e2e.sh  
否则生成的文件永远是最早版本的bufferOverFlow漏洞的文件。  
  
    
# 生成新的漏洞需要改的文件
1.generate.py 需要改每一个example  
2.sa_tags.py 需要添加你所新增的漏洞的Tag  
3.template.py 需要添加你所新增的漏洞模板  











