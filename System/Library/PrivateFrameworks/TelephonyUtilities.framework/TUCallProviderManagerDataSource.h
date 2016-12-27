/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol TUCallProviderManagerDataSource <NSObject>
@property (nonatomic,copy,readonly) NSDictionary * providersByIdentifier; 
@property (assign,nonatomic,__weak) id<TUCallProviderManagerDataSourceDelegate> delegate; 
@required
-(void)setDelegate:(id)arg1;
-(id<TUCallProviderManagerDataSourceDelegate>)delegate;
-(void)invalidate;
-(void)blockUntilInitialStateReceived;
-(NSDictionary *)providersByIdentifier;

@end
