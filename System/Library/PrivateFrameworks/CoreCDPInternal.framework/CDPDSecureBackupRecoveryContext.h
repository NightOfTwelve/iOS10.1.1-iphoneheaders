/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CDPDevice, NSString;

@interface CDPDSecureBackupRecoveryContext : NSObject {

	BOOL _silentRecovery;
	BOOL _usePreviouslyCachedSecret;
	CDPDevice* _device;
	NSString* _recoverySecret;

}

@property (nonatomic,copy) CDPDevice * device;                            //@synthesize device=_device - In the implementation block
@property (nonatomic,copy) NSString * recoverySecret;                     //@synthesize recoverySecret=_recoverySecret - In the implementation block
@property (assign,nonatomic) BOOL silentRecovery;                         //@synthesize silentRecovery=_silentRecovery - In the implementation block
@property (assign,nonatomic) BOOL usePreviouslyCachedSecret;              //@synthesize usePreviouslyCachedSecret=_usePreviouslyCachedSecret - In the implementation block
-(void)setRecoverySecret:(NSString *)arg1 ;
-(NSString *)recoverySecret;
-(BOOL)usePreviouslyCachedSecret;
-(BOOL)silentRecovery;
-(void)setUsePreviouslyCachedSecret:(BOOL)arg1 ;
-(void)setSilentRecovery:(BOOL)arg1 ;
-(CDPDevice *)device;
-(void)setDevice:(CDPDevice *)arg1 ;
@end

