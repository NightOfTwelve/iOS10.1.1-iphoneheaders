/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WPAWDLDelegate <NSObject>
@optional
-(void)awdlStartedAdvertising:(id)arg1;
-(void)awdlAdvertisingPending:(id)arg1;
-(void)awdl:(id)arg1 failedToStartAdvertisingWithError:(id)arg2;
-(void)awdlStartedScanning:(id)arg1;
-(void)awdl:(id)arg1 failedToStartScanningWithError:(id)arg2;
-(void)awdl:(id)arg1 foundDevice:(id)arg2 rssi:(id)arg3;
-(BOOL)awdl:(id)arg1 foundDevice:(id)arg2;
-(void)awdlStoppedAdvertising:(id)arg1;
-(void)awdlStoppedScanning:(id)arg1;

@required
-(void)awdlDidUpdateState:(id)arg1;

@end
