data<-read.csv(file.choose())
print(data %>% count(Gender))

