/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ECUtils : NSObject
+(id)dateFromXlDateTimeNumber:(double)arg1 edWorkbook:(id)arg2 ;
+(id)renameMap;
+(double)timeIntervalFromXlDateTimeNumber:(double)arg1 edWorkbook:(id)arg2 ;
+(unsigned)dateTimeOffsetForBuggy1900Dates:(double)arg1 edWorkbook:(id)arg2 ;
+(BOOL)isRenameFunction:(id)arg1 ;
+(id)renameFunction:(id)arg1 ;
+(id)lassoStyleTableReferenceFromTableId:(id)arg1 ;
+(id)lassoDefaultTableName;
+(BOOL)isValidDateTime:(double)arg1 edWorkbook:(id)arg2 ;
+(BOOL)validDateInExcel:(id)arg1 edWorkbook:(id)arg2 ;
+(double)dateTimeNumberFromNSDate:(id)arg1 edWorkbook:(id)arg2 ;
@end
