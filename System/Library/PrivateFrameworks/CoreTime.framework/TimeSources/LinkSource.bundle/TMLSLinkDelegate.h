/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreTime.framework/TimeSources/LinkSource.bundle/LinkSource
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TMLSLinkDelegate <NSObject>
@required
-(void)link:(id)arg1 didReceiveDrift:(double)arg2;
-(void)link:(id)arg1 didReceiveAutomaticTimeEnabled:(BOOL)arg2;
-(void)link:(id)arg1 didReceiveTimeZone:(id)arg2 forSource:(id)arg3;
-(void)link:(id)arg1 didSyncLocalRTC:(double)arg2 remoteRTC:(double)arg3 uncertainty:(double)arg4;
-(void)link:(id)arg1 didReceiveTime:(double)arg2 remoteRTC:(double)arg3 uncertainty:(double)arg4 source:(id)arg5;
-(void)linkDidReceiveReset:(id)arg1;

@end
