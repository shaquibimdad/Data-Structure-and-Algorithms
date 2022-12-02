data("algae")
ggplot(algae,aes(x=season)) + geom_bar() +
  ggtitle('Distribution of the Water Samples across Seasons')
ggplot(algae,aes(x=factor(1),fill=season)) +
  geom_bar(width=1) + ggtitle('Distribution of the Water
Samples across Seasons') + coord_polar(theta="y")
ggplot(algae,aes(x=a1)) + geom_histogram(binwidth=10) + ggtitle("Distribution of Algae a1") + ylab("No.
of Occurrencies")
