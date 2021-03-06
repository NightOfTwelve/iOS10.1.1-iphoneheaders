/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PTSRow.h>

@interface PTSEditFloatRow : PTSRow {

	unsigned long long _precision;

}

@property (assign,nonatomic) unsigned long long precision;              //@synthesize precision=_precision - In the implementation block
-(id)init;
-(id)precision:(unsigned long long)arg1 ;
-(void)updateWithRow:(id)arg1 ;
-(Class)rowTableViewCellClass;
-(id)between:(double)arg1 and:(double)arg2 ;
-(void)setPrecision:(unsigned long long)arg1 ;
-(unsigned long long)precision;
@end

