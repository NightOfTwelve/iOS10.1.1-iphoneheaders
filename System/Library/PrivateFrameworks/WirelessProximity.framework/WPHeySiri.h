/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessProximity/WPClient.h>

@protocol WPHeySiriProtocol;
@interface WPHeySiri : WPClient {

	id<WPHeySiriProtocol> _delegate;

}

@property (assign,nonatomic,__weak) id<WPHeySiriProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<WPHeySiriProtocol>)arg1 ;
-(id<WPHeySiriProtocol>)delegate;
-(void)invalidate;
-(void)stopScanningAndAdvertising;
-(void)startScanning;
-(void)startScanningAndAdvertisingWithData:(id)arg1 ;
-(void)stateDidChange:(long long)arg1 ;
-(void)stopAdvertising;
-(id)clientAsString;
-(void)deviceDiscovered:(id)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)advertisingStartedOfType:(unsigned char)arg1 ;
-(void)advertisingStoppedOfType:(unsigned char)arg1 ;
-(void)advertisingPendingOfType:(unsigned char)arg1 ;
-(void)startAdvertisingWithData:(id)arg1 ;
-(void)stopScanning;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
@end
