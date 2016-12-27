/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKAppKeyboardBridge.h>
#import <libobjc.A.dylib/IKDOMFeature.h>

@protocol IKAppKeyboardDelegate;
@class NSString, IKAppContext, IKJSKeyboard;

@interface IKAppKeyboard : NSObject <IKAppKeyboardBridge, IKDOMFeature> {

	NSString* _jsText;
	NSString* _jsSource;
	NSString* _featureName;
	IKAppContext* _appContext;
	id<IKAppKeyboardDelegate> _delegate;
	NSString* _text;
	IKJSKeyboard* _jsKeyboard;
	NSString* _source;

}

@property (assign,setter=setJSKeyboard:,nonatomic,__weak) IKJSKeyboard * jsKeyboard;              //@synthesize jsKeyboard=_jsKeyboard - In the implementation block
@property (setter=_setSource:,getter=_source,nonatomic,copy) NSString * source;                   //@synthesize source=_source - In the implementation block
@property (assign,nonatomic,__weak) id<IKAppKeyboardDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * text;                                                       //@synthesize text=_text - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=setJSText:,nonatomic,copy) NSString * jsText;                                   //@synthesize jsText=_jsText - In the implementation block
@property (setter=setJSSource:,nonatomic,copy) NSString * jsSource;                               //@synthesize jsSource=_jsSource - In the implementation block
@property (nonatomic,copy,readonly) NSString * featureName;                                       //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                                  //@synthesize appContext=_appContext - In the implementation block
+(id)makeFeatureJSObjectForFeature:(id)arg1 ;
-(void)setDelegate:(id<IKAppKeyboardDelegate>)arg1 ;
-(id<IKAppKeyboardDelegate>)delegate;
-(id)_source;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)_setSource:(id)arg1 ;
-(void)setJSText:(id)arg1 ;
-(NSString *)jsText;
-(NSString *)jsSource;
-(void)setJSKeyboard:(id)arg1 ;
-(IKJSKeyboard *)jsKeyboard;
-(void)setJSSource:(id)arg1 ;
-(NSString *)featureName;
-(IKAppContext *)appContext;
-(id)initWithDOMNode:(id)arg1 featureName:(id)arg2 ;
@end
