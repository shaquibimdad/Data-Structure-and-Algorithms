d<-390
repeat{
  if(d >= 0 & d < 90)
  {
    print("It is in Quadrant 1")
  }else if(d >= 90 & d < 180)
  {
    print("It is in Quadrant 2")
  }else if(d >= 180 & d < 270)
  {
    print("It is in Quadrant 3")
  }else if(d >= 270 & d < 360)
  {
    print("It is in Quadrant 4")
  }else if(d >= 360)
  {
    d<-d-360
  }else
  {
    break
  }
}