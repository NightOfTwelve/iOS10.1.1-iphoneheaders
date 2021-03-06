/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MRCAMLBezierData : NSObject {

	double ax;
	double bx;
	double cx;
	double ay;
	double by;
	double cy;

}
-(id)initWithTimingFunction:(id)arg1 ;
-(double)evaluate_inverseAtTime:(double)arg1 ;
-(id)initWithControlPoints:(const double*)arg1 ;
-(double)solve_x:(double)arg1 epsilon:(double)arg2 ;
-(double)solve_y:(double)arg1 epsilon:(double)arg2 ;
-(double)sample_y_derivative:(double)arg1 ;
-(double)sample_x_derivative:(double)arg1 ;
-(double)evaluatAtTime:(double)arg1 ;
-(double)sample_y:(double)arg1 ;
-(double)sample_x:(double)arg1 ;
@end

