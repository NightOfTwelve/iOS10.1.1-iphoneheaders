/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AssistantCallbackUIDelegateResult
@optional
-(void)callbackAskUserForUncertifiedResult:(int)arg1;
-(void)callbackAskUserForSetupCodeResult:(int)arg1 password:(id)arg2;

@required
-(void)callbackAskUserForPasswordResult:(int)arg1 password:(id)arg2 remember:(int)arg3;
-(void)callbackAskUserToChooseFromStringListResult:(int)arg1 selectedString:(id)arg2;
-(void)callbackAskUserAQuestionResult:(int)arg1 result:(int)arg2;

@end

