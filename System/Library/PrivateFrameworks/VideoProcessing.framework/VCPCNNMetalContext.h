/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLCommandQueue;
@interface VCPCNNMetalContext : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;

}

@property (retain) id<MTLDevice> device;                          //@synthesize device=_device - In the implementation block
@property (retain) id<MTLCommandQueue> commandQueue;              //@synthesize commandQueue=_commandQueue - In the implementation block
+(BOOL)supportGPU;
+(BOOL)supportNeon;
-(id)initNewContext;
-(id<MTLDevice>)device;
-(void)setDevice:(id<MTLDevice>)arg1 ;
-(id<MTLCommandQueue>)commandQueue;
-(void)setCommandQueue:(id<MTLCommandQueue>)arg1 ;
@end

