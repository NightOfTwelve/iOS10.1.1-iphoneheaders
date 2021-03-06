/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:41:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIPDFPageViewAccessibility_super.h>

@interface UIPDFPageViewAccessibility : __UIPDFPageViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryBaseClass;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(CGPDFPageRef)_axPageRef;
-(id)_axLineSelections;
-(CGPDFSelectionRef)_lineSelectionForSelection:(CGPDFSelectionRef)arg1 ;
-(long long)accessibilityLineNumberForPoint:(CGPoint)arg1 ;
-(id)accessibilityContentForLineNumber:(long long)arg1 ;
-(CGRect)accessibilityFrameForLineNumber:(long long)arg1 ;
-(id)accessibilityPageContent;
@end

