/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSAttributedString, NSURL;

@interface VSSpeechRequest : NSObject <NSSecureCoding> {

	BOOL _useCustomVoice;
	BOOL _maintainsInput;
	BOOL _audioSessionIDIsValid;
	unsigned _audioSessionID;
	unsigned _audioQueueFlags;
	NSString* _text;
	NSAttributedString* _attributedText;
	NSString* _languageCode;
	NSString* _voiceName;
	long long _footprint;
	long long _voiceType;
	long long _gender;
	NSURL* _outputPath;
	double _rate;
	double _pitch;
	double _volume;
	NSString* _clientBundleIdentifier;
	NSURL* _resourceListURL;
	NSURL* _resourceSearchPathURL;
	/*^block*/id _stopHandler;
	/*^block*/id _pauseHandler;

}

@property (nonatomic,copy) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,copy) NSString * languageCode;                          //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,copy) NSString * voiceName;                             //@synthesize voiceName=_voiceName - In the implementation block
@property (assign,nonatomic) long long footprint;                            //@synthesize footprint=_footprint - In the implementation block
@property (assign,nonatomic) BOOL useCustomVoice;                            //@synthesize useCustomVoice=_useCustomVoice - In the implementation block
@property (assign,nonatomic) long long voiceType;                            //@synthesize voiceType=_voiceType - In the implementation block
@property (assign,nonatomic) long long gender;                               //@synthesize gender=_gender - In the implementation block
@property (nonatomic,copy) NSURL * outputPath;                               //@synthesize outputPath=_outputPath - In the implementation block
@property (assign,nonatomic) double rate;                                    //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) double pitch;                                   //@synthesize pitch=_pitch - In the implementation block
@property (assign,nonatomic) double volume;                                  //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) BOOL maintainsInput;                            //@synthesize maintainsInput=_maintainsInput - In the implementation block
@property (assign,nonatomic) BOOL audioSessionIDIsValid;                     //@synthesize audioSessionIDIsValid=_audioSessionIDIsValid - In the implementation block
@property (assign,nonatomic) unsigned audioSessionID;                        //@synthesize audioSessionID=_audioSessionID - In the implementation block
@property (assign,nonatomic) unsigned audioQueueFlags;                       //@synthesize audioQueueFlags=_audioQueueFlags - In the implementation block
@property (nonatomic,copy) NSString * clientBundleIdentifier;                //@synthesize clientBundleIdentifier=_clientBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * resourceListURL;                          //@synthesize resourceListURL=_resourceListURL - In the implementation block
@property (nonatomic,copy) NSURL * resourceSearchPathURL;                    //@synthesize resourceSearchPathURL=_resourceSearchPathURL - In the implementation block
@property (nonatomic,copy) id stopHandler;                                   //@synthesize stopHandler=_stopHandler - In the implementation block
@property (nonatomic,copy) id pauseHandler;                                  //@synthesize pauseHandler=_pauseHandler - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSAttributedString *)attributedText;
-(double)volume;
-(void)setVolume:(double)arg1 ;
-(void)setRate:(double)arg1 ;
-(double)rate;
-(NSString *)languageCode;
-(void)setLanguageCode:(NSString *)arg1 ;
-(void)setPitch:(double)arg1 ;
-(double)pitch;
-(void)setFootprint:(long long)arg1 ;
-(BOOL)useCustomVoice;
-(void)setUseCustomVoice:(BOOL)arg1 ;
-(long long)voiceType;
-(void)setVoiceType:(long long)arg1 ;
-(BOOL)maintainsInput;
-(void)setMaintainsInput:(BOOL)arg1 ;
-(BOOL)audioSessionIDIsValid;
-(void)setAudioSessionIDIsValid:(BOOL)arg1 ;
-(unsigned)audioQueueFlags;
-(void)setAudioQueueFlags:(unsigned)arg1 ;
-(NSURL *)resourceListURL;
-(void)setResourceListURL:(NSURL *)arg1 ;
-(NSURL *)resourceSearchPathURL;
-(void)setResourceSearchPathURL:(NSURL *)arg1 ;
-(id)stopHandler;
-(void)setStopHandler:(id)arg1 ;
-(id)pauseHandler;
-(void)setPauseHandler:(id)arg1 ;
-(long long)gender;
-(void)setGender:(long long)arg1 ;
-(unsigned)audioSessionID;
-(void)setAudioSessionID:(unsigned)arg1 ;
-(NSString *)clientBundleIdentifier;
-(void)setClientBundleIdentifier:(NSString *)arg1 ;
-(void)setVoiceName:(NSString *)arg1 ;
-(NSString *)voiceName;
-(long long)footprint;
-(NSURL *)outputPath;
-(void)setOutputPath:(NSURL *)arg1 ;
@end

