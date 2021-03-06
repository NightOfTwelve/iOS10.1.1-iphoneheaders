/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, NSLock;

@interface GEOGeocodeRequester : NSObject {

	NSMapTable* _pendingBatchGeocodes;
	NSLock* _pendingGeocodesLock;

}
+(id)sharedGeocodeRequester;
-(id)init;
-(void)dealloc;
-(void)batchReverseGeocode:(id)arg1 success:(/*^block*/id)arg2 networkActivity:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)cancelBatchReverseGeocode:(id)arg1 ;
@end

