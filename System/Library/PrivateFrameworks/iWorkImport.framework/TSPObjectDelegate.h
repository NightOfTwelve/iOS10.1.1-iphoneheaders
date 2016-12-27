/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TSPObjectContext;


@protocol TSPObjectDelegate
@property (nonatomic,readonly) TSPObjectContext * context; 
@required
-(long long)modifyObjectTokenForNewObject;
-(id)newObjectUUIDForObject:(id)arg1;
-(void)beginIgnoringModificationsForObject:(id)arg1;
-(void)endIgnoringModificationsForObject:(id)arg1;
-(void)willModifyObject:(id)arg1 duringReadOperation:(BOOL)arg2;
-(BOOL)canSetObjectUUIDForObject:(id)arg1;
-(id)objectUUIDMap;
-(long long)newObjectIdentifier;
-(BOOL)isObjectInDocument:(id)arg1;
-(TSPObjectContext *)context;

@end
