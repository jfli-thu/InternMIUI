#include <iostream>
#include <cstring>
#include <cmath>
#include <jni.h>

using namespace std;

const double PI = 3.14159265;
const string FRONTDOOR = "hj";
const int SAMPLE_RATE = 44100;
const double TONE_LENGTH = 0.0872;
const double string  charMap = "0123456789abcdefghijklmnopqrstuv";
const double double freqMap[] = {1760, 1864.7, 1975.5, 2093, 2217.5, 2349.3,
								 2489, 2637, 2793.8, 2960, 3136, 3322.4, 
								 3520, 3729.3, 3951.1, 4186, 4434.9, 4698.6,
								 4978, 5274, 5587.7, 5919.9, 6271.9, 6644.9,
								 7040, 7458.6, 7902.1, 8372, 8869.8, 9397.3,
								 9956.1, 10548
								};


double* GenerateSound(string message) 
{
	String extMessage = FRONTDOOR + message;
	int numSamples = (int) (SAMPLE_RATE * TONE_LENGTH);
	double *genSnd = new double[2*numSamples*extMessage.size()];

	for (int i=0; i<extMessage.size(); ++i) {
		int idx = charMap.find(extMessage[i]);
		if (idx==string::npos) {
			return NULL;
		}
		double curTone = freqMap[idx];
		int j = 0;
		while (j<numSamples) {
			double dval = sin(2*PI*curTone*j/SAMPLE_RATE);
			short val = (short) (dval * 32767);
			genSnd[2*i*numSamples+(j++)] = () 
		}
		
		for (int j=0; j<numSamples; ++j) {
			short val = (short) (tonSample[j])
			genSnd[2*i*numSamples+j] = 
		}
	}
}


JNIEXPORT void 
JNICALL Java_com_intern_text2sound_Text2sound_GenerateSound(JNIEnv *env, jobject obj, jstring msg) {
	char extMessage[30] = {"hj"};
	char* message = (env)->GetStringUTFChars(msg,NULL);
	strcat(extMessage,message);
	
}