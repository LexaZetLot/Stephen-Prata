friend Stonewt operator* (double mult, const Stonewt& s);
Stonewt operator* (double mult, const Stonewt& s)
{
	return Stonewt(mult * s.pounds);
}