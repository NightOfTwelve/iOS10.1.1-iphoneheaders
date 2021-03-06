/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CVML/CVMLRequest.h>

@class NSError, NSArray;

@interface CVMLCreateFaceRegionMapRequest : CVMLRequest {

	NSError* _initializationError;
	NSArray* _inputFaces;

}
-(id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)internalProcessWithHandler:(id)arg1 error:(id*)arg2 ;
-(void)internalDetermineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputFacesThatNeedProcessing:(id)arg3 outputFacesThatNeed2DLandmarks:(id)arg4 ;
@end

