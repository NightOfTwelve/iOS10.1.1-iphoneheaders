/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OAXShape3D : NSObject
+(id)readShape3DFromXmlNode:(xmlNode*)arg1 packagePart:(id)arg2 drawingState:(id)arg3 ;
+(BOOL)isEmpty:(id)arg1 ;
+(id)bevelTypeEnumMap;
+(id)readBevelFromXmlNode:(xmlNode*)arg1 ;
+(id)materialEnumMap;
+(void)writeBevel:(id)arg1 to:(id)arg2 ;
+(void)writeShape3D:(id)arg1 to:(id)arg2 ;
+(void)writeShape3DMaterialOnly:(id)arg1 to:(id)arg2 ;
@end

