while [ 1 ]; do
	eval $(xdotool getmouselocation --shell)
	echo $X $Y
done