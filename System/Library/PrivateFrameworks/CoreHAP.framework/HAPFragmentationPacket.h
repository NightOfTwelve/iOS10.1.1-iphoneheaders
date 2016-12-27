/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface HAPFragmentationPacket : NSObject {

	unsigned short _transactionIdentifier;
	unsigned _length;
	unsigned _offset;
	NSData* _data;

}

@property (nonatomic,readonly) unsigned short transactionIdentifier;              //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned length;                                   //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) unsigned offset;                                   //@synthesize offset=_offset - In the implementation block
@property (nonatomic,copy,readonly) NSData * data;                                //@synthesize data=_data - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(unsigned)length;
-(NSData *)data;
-(unsigned)offset;
-(id)shortDescription;
-(id)initWithData:(id)arg1 transactionIdentifier:(unsigned short)arg2 length:(unsigned)arg3 offset:(unsigned)arg4 ;
-(unsigned short)transactionIdentifier;
-(id)serialize;
-(id)initWithFragmentedPacketData:(id)arg1 ;
@end
