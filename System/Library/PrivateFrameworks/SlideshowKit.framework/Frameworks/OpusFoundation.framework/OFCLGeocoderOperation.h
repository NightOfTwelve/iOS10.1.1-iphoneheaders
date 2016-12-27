/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OFNSOperation.h>

@class CLGeocoder, CLLocation, NSArray;

@interface OFCLGeocoderOperation : OFNSOperation {

	CLGeocoder* _geocoder;
	CLLocation* _location;
	double _accuracy;
	NSArray* _placemarks;

}

@property (retain) NSArray * placemarks;              //@synthesize placemarks=_placemarks - In the implementation block
+(double)recommendedAccuracy;
+(id)operationWithLocation:(id)arg1 accuracy:(double)arg2 ;
+(id)operationWithLocation:(id)arg1 ;
-(void)dealloc;
-(void)setPlacemarks:(NSArray *)arg1 ;
-(id)initWithLocation:(id)arg1 accuracy:(double)arg2 ;
-(unsigned long long)launchOperation;
-(void)cancelOperation;
-(void)finishOperation;
-(void)cleanupOperation;
-(NSArray *)placemarks;
@end
