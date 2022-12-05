data<-read.xlsx(file.choose())
data
dim(data)
t<-arrange(data,desc(First.name))
t
#print(data %>% arrange(desc(First.name))
print(data %>% filter(First.name=="Abbot")%>%select(Email))
print(data %>% count(Gender))



