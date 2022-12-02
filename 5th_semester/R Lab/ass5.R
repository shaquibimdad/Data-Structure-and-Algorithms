df<-read.csv(file.choose())
df
nrow(df)
max(df$Sal)
df1<-subset(df,Department=="IT")
df1
df2<-subset(df,Department=="IT"& Sal>10000)
df2
df3<-subset(df,Sal == max(df$Sal))
df3
write.csv(df2,"E:\\f1.csv")