/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:39:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface AWDMDNSResponderResolveStatsDomain : PBCodable <NSCopying> {

	NSMutableArray* _hostnames;
	NSString* _name;

}

@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableArray * hostnames;              //@synthesize hostnames=_hostnames - In the implementation block
+(Class)hostnameType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasName;
-(void)setHostnames:(NSMutableArray *)arg1 ;
-(void)addHostname:(id)arg1 ;
-(unsigned long long)hostnamesCount;
-(void)clearHostnames;
-(id)hostnameAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)hostnames;
@end

