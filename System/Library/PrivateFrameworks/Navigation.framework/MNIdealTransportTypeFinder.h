/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Navigation/Navigation-Structs.h>
@class MSPHistoryContainer;

@interface MNIdealTransportTypeFinder : NSObject {

	MSPHistoryContainer* _mapsHistory;

}
-(void)idealTransportTypeForOrigin:(SCD_Struct_MN3)arg1 destination:(SCD_Struct_MN3)arg2 mapType:(int)arg3 handler:(/*^block*/id)arg4 ;
-(id)initWithMapsHistory:(BOOL)arg1 ;
-(long long)idealTransportTypeForOrigin:(SCD_Struct_MN3)arg1 destination:(SCD_Struct_MN3)arg2 mapType:(int)arg3 ;
-(long long)idealTransportTypeForMapType:(int)arg1 ;
-(void)idealTransportTypeForOrigin:(SCD_Struct_MN3)arg1 destination:(SCD_Struct_MN3)arg2 mapType:(int)arg3 handler:(/*^block*/id)arg4 handlerQueue:(id)arg5 ;
-(void)idealTransportTypeForMapType:(int)arg1 handler:(/*^block*/id)arg2 ;
-(void)_idealTransportTypeForOrigin:(SCD_Struct_MN3)arg1 destination:(SCD_Struct_MN3)arg2 mapType:(int)arg3 handler:(/*^block*/id)arg4 handlerQueue:(id)arg5 ;
-(void)_preferredTransportTypeForMapType:(int)arg1 handler:(/*^block*/id)arg2 handlerQueue:(id)arg3 ;
-(long long)_transportTypeCompatibleWithMapType:(int)arg1 ;
-(id)_transportTypePreferenceAsString:(long long)arg1 ;
@end

