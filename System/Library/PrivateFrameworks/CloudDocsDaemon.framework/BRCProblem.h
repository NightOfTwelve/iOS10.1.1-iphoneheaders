/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface BRCProblem : NSObject <NSSecureCoding, NSCopying> {

	int _type;
	NSSet* _effectedRecordNames;

}

@property (nonatomic,readonly) int type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSSet * effectedRecordNames;              //@synthesize effectedRecordNames=_effectedRecordNames - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithProblem:(id)arg1 ;
-(id)initWithType:(int)arg1 recordName:(id)arg2 ;
-(void)mergeWithProblem:(id)arg1 ;
-(NSSet *)effectedRecordNames;
@end

