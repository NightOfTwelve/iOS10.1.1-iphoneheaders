/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNAutocompletePerformanceProbe <CNAutocompleteProbe>
@required
-(void)recordNumberOfResultsReturned:(unsigned long long)arg1 inTimeInterval:(double)arg2 forBatch:(unsigned long long)arg3 includesServers:(BOOL)arg4;
-(void)recordNumberOfContactResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
-(void)recordNumberOfRecentResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
-(void)recordNumberOfSuggestionResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
-(void)recordNumberOfPredictionResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
-(void)recordNumberOfSupplementalResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
-(void)recordNumberOfDirectoryServerResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;
-(void)recordNumberOfCalendarServerResults:(unsigned long long)arg1 inTimeInterval:(double)arg2;

@end
