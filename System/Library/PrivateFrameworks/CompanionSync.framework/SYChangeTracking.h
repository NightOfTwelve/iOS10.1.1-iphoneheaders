/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SYChangeTracking <NSObject>
@required
-(void)addObject:(id)arg1;
-(void)addObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
-(void)updateObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
-(void)deleteObject:(id)arg1 context:(id)arg2 idsOptions:(id)arg3;
-(void)addObject:(id)arg1 context:(id)arg2;
-(void)updateObject:(id)arg1 context:(id)arg2;
-(void)deleteObject:(id)arg1 context:(id)arg2;
-(void)addObject:(id)arg1 completion:(/*^block*/id)arg2;
-(void)updateObject:(id)arg1 completion:(/*^block*/id)arg2;
-(void)deleteObject:(id)arg1 completion:(/*^block*/id)arg2;
-(void)deleteObject:(id)arg1;
-(void)updateObject:(id)arg1;

@end
