/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FCRImage : NSObject {

	unsigned long long width;
	unsigned long long height;
	unsigned long long bytesPerRow;
	char* rawDataBuffer;
	char* alignedDataBuffer;
	BOOL freeBufferWhenDone;

}

@property (assign) unsigned long long width; 
@property (assign) unsigned long long height; 
@property (assign) unsigned long long bytesPerRow; 
-(id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 buffer:(char*)arg4 freeBufferWhenDone:(BOOL)arg5 ;
-(char*)getAlignedImageData;
-(void)dealloc;
-(unsigned long long)width;
-(unsigned long long)height;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(void)setBytesPerRow:(unsigned long long)arg1 ;
-(unsigned long long)bytesPerRow;
@end

