/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLIntermediate.h>

@class NSSQLEntity, NSAttributeDescription, NSExpression;

@interface NSSQLBoundedByIntermediate : NSSQLIntermediate {

	NSSQLEntity* _entity;
	NSAttributeDescription* _target;
	NSExpression* _bounds;

}
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)initWithWorkingEntity:(id)arg1 target:(id)arg2 bounds:(id)arg3 scope:(id)arg4 ;
-(void)dealloc;
@end

