/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@interface IMMockItemInfo : NSObject <NSCoding> {

	BOOL _outgoing;
	long long _type;

}

@property (nonatomic,readonly) long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL outgoing;               //@synthesize outgoing=_outgoing - In the implementation block
+(id)defaultMockInfoArray;
+(id)encodedMockItemInfoArray:(id)arg1 ;
+(id)decodedMockItemInfoArray:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)type;
-(id)initWithMockItemType:(long long)arg1 outgoing:(BOOL)arg2 ;
-(BOOL)outgoing;
@end
