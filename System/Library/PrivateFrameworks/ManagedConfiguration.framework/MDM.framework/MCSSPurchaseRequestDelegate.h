/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:42:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MDM/MCSSRequestDelegate.h>
#import <libobjc.A.dylib/SSPurchaseRequestDelegate.h>

@class SSPurchaseRequest, NSString;

@interface MCSSPurchaseRequestDelegate : MCSSRequestDelegate <SSPurchaseRequestDelegate>

@property (nonatomic,retain,readonly) SSPurchaseRequest * request; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithPurchases:(id)arg1 ;
-(void)startCompletionBlock:(/*^block*/id)arg1 ;
@end
