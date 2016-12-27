/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PairedUnlock.framework/PairedUnlock
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PairedUnlock/PairedUnlock-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PUProtoDidGetPasscodeState : PBCodable <NSCopying> {

	BOOL _hasPasscode;
	BOOL _isLocked;
	BOOL _isUnlockOnly;

}

@property (assign,nonatomic) BOOL hasPasscode;               //@synthesize hasPasscode=_hasPasscode - In the implementation block
@property (assign,nonatomic) BOOL isLocked;                  //@synthesize isLocked=_isLocked - In the implementation block
@property (assign,nonatomic) BOOL isUnlockOnly;              //@synthesize isUnlockOnly=_isUnlockOnly - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isLocked;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setIsLocked:(BOOL)arg1 ;
-(void)setHasPasscode:(BOOL)arg1 ;
-(BOOL)isUnlockOnly;
-(void)setIsUnlockOnly:(BOOL)arg1 ;
-(BOOL)hasPasscode;
@end
