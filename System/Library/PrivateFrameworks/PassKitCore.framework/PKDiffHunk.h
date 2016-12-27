/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKDiffHunk : NSObject <NSSecureCoding> {

	NSString* _key;
	id _oldValue;
	id _newValue;
	NSString* _message;

}

@property (nonatomic,retain) NSString * key;                  //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) id valueOld;                     //@synthesize oldValue=_oldValue - In the implementation block
@property (nonatomic,retain) id valueNew;                     //@synthesize newValue=_newValue - In the implementation block
@property (nonatomic,retain) NSString * message;              //@synthesize message=_message - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)hunkWithKey:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 message:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)key;
-(long long)compare:(id)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(void)setKey:(NSString *)arg1 ;
-(id)valueOld;
-(id)valueNew;
-(void)setValueOld:(id)arg1 ;
-(void)setValueNew:(id)arg1 ;
-(BOOL)isEqualToDiffHunk:(id)arg1 ;
@end
