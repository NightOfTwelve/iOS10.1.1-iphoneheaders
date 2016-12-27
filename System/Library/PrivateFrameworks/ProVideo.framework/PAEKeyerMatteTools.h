/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@interface PAEKeyerMatteTools : NSObject
-(id)init;
-(BOOL)addParametersWithParamAPI:(id)arg1 hideSimpleViewParam:(unsigned)arg2 isLumaKey:(BOOL)arg3 ;
-(BOOL)addLevelsParametersWithParamAPI:(id)arg1 hideSimpleViewParam:(unsigned)arg2 ;
-(BOOL)addAdvancedParametersWithParamAPI:(id)arg1 hideSimpleViewParam:(unsigned)arg2 ;
-(BOOL)doMatteManipulationWithParamAPI:(id)arg1 withPrivateParamAPI:(id)arg2 withInfo:(SCD_Struct_PA46*)arg3 pixelAspectRatio:(float)arg4 fieldHeight:(float)arg5 doInvertMatte:(BOOL)arg6 inputIsInverted:(BOOL)arg7 fillHoles:(BOOL)arg8 scaling:(BOOL)arg9 blendingGamma:(float)arg10 preKeyedInputNode:(HGRef<HGNode>*)arg11 outputNode:(HGRef<HGNode>*)arg12 ;
@end
