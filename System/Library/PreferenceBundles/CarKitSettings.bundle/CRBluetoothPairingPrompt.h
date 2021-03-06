/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, UIAlertController;

@interface CRBluetoothPairingPrompt : NSObject {

	/*^block*/id _confirmationCompletion;
	unsigned long long _pairingStyle;
	NSString* _deviceName;
	NSNumber* _passKey;
	UIAlertController* _presentedAlertController;

}

@property (assign,nonatomic) unsigned long long pairingStyle;                                  //@synthesize pairingStyle=_pairingStyle - In the implementation block
@property (nonatomic,copy) NSString * deviceName;                                              //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,copy) NSNumber * passKey;                                                 //@synthesize passKey=_passKey - In the implementation block
@property (assign,nonatomic,__weak) UIAlertController * presentedAlertController;              //@synthesize presentedAlertController=_presentedAlertController - In the implementation block
@property (nonatomic,copy) id confirmationCompletion;                                          //@synthesize confirmationCompletion=_confirmationCompletion - In the implementation block
+(id)_sanitizeName:(id)arg1 ;
-(void)setPairingStyle:(unsigned long long)arg1 ;
-(id)confirmationCompletion;
-(void)_handlePairingCompleted:(BOOL)arg1 ;
-(void)setConfirmationCompletion:(id)arg1 ;
-(void)setPassKey:(NSNumber *)arg1 ;
-(void)setPresentedAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)presentedAlertController;
-(NSNumber *)passKey;
-(id)initWithPairingStyle:(unsigned long long)arg1 deviceName:(id)arg2 passKey:(id)arg3 ;
-(void)dealloc;
-(id)_alertController;
-(unsigned long long)pairingStyle;
-(void)presentFromViewController:(id)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceName;
@end

