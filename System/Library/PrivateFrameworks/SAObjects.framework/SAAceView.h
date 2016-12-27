/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseAceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SAAceView : SABaseAceObject <SAAceSerializable>

@property (assign,nonatomic) BOOL canBeRefreshed; 
@property (nonatomic,retain) id<SAAceSerializable> context; 
@property (nonatomic,copy) NSNumber * deferredRendering; 
@property (nonatomic,copy) NSNumber * listenAfterSpeaking; 
@property (nonatomic,copy) NSString * speakableText; 
@property (nonatomic,copy) NSString * viewId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceView;
+(id)aceViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(id<SAAceSerializable>)context;
-(void)setContext:(id<SAAceSerializable>)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSNumber *)listenAfterSpeaking;
-(void)setListenAfterSpeaking:(NSNumber *)arg1 ;
-(NSString *)speakableText;
-(void)setSpeakableText:(NSString *)arg1 ;
-(BOOL)canBeRefreshed;
-(void)setCanBeRefreshed:(BOOL)arg1 ;
-(NSNumber *)deferredRendering;
-(void)setDeferredRendering:(NSNumber *)arg1 ;
-(void)setViewId:(NSString *)arg1 ;
-(NSString *)viewId;
@end
