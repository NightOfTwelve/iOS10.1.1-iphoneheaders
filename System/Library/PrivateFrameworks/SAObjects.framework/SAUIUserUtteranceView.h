/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class NSString;

@interface SAUIUserUtteranceView : SAAceView

@property (assign,setter=setAfui_KeyboardInitiated:,getter=afui_isKeyboardInitiated,nonatomic) BOOL afui_keyboardInitiated; 
@property (nonatomic,copy) NSString * text; 
+(id)userUtteranceView;
+(id)userUtteranceViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setAfui_KeyboardInitiated:(BOOL)arg1 ;
-(BOOL)afui_isKeyboardInitiated;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
@end
