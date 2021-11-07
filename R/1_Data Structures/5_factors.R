days = c("Lun","Mar","Mer","Gio","Ven","Sab","Dom")
days <- factor(days)
(days.sample <- sample(days,3))
(bool <- factor(days.sample,levels=days,ordered = FALSE))

