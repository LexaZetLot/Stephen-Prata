Stonewt operator* (double mult);

Stonewt Stonewt::operator (double mult)
{
	return Stonewt(mult * pounds);
}