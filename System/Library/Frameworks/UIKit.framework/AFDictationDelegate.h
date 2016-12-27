/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFDictationDelegate <NSObject>
@optional
-(void)dictationConnection:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(BOOL)arg4 final:(BOOL)arg5;
-(void)dictationConnectionSpeechRecordingWillBegin:(id)arg1;
-(void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
-(void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
-(void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
-(void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
-(void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
-(void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4;
-(void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
-(void)dictationConnection:(id)arg1 didProcessAudioDuration:(double)arg2;
-(void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1;
-(void)dictationConnection:(id)arg1 didRecognizeTranscriptionObjects:(id)arg2 languageModel:(id)arg3;
-(void)dictationConnnectionDidChangeAvailability:(id)arg1;
-(void)dictationConnection:(id)arg1 didFinishWritingAudioFile:(id)arg2 error:(id)arg3;

@end
