/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDPCSData.h>

@class CKEncryptedData;

@interface CKDChainPCSData : CKDPCSData {

	CKEncryptedData* _encryptedChainPCSPrivateKey;

}

@property (nonatomic,readonly) CKEncryptedData * encryptedChainPCSPrivateKey;              //@synthesize encryptedChainPCSPrivateKey=_encryptedChainPCSPrivateKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)CKPropertiesDescription;
-(CKEncryptedData *)encryptedChainPCSPrivateKey;
-(id)initWithPCSData:(id)arg1 encryptedPrivateKey:(id)arg2 ;
@end
