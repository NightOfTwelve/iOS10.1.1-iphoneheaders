/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VSCredentialEntryField : NSObject {

	BOOL _secure;
	NSString* _title;
	NSString* _placeholder;
	long long _keyboardType;
	NSString* _text;
	long long _autocapitalizationType;
	long long _autocorrectionType;

}

@property (nonatomic,copy) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                          //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,nonatomic) long long keyboardType;                        //@synthesize keyboardType=_keyboardType - In the implementation block
@property (assign,getter=isSecure,nonatomic) BOOL secure;                   //@synthesize secure=_secure - In the implementation block
@property (nonatomic,copy) NSString * text;                                 //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long autocapitalizationType;              //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (assign,nonatomic) long long autocorrectionType;                  //@synthesize autocorrectionType=_autocorrectionType - In the implementation block
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setSecure:(BOOL)arg1 ;
-(BOOL)isSecure;
-(long long)autocapitalizationType;
-(void)setAutocapitalizationType:(long long)arg1 ;
-(long long)autocorrectionType;
-(void)setAutocorrectionType:(long long)arg1 ;
-(long long)keyboardType;
-(void)setKeyboardType:(long long)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)placeholder;
@end

