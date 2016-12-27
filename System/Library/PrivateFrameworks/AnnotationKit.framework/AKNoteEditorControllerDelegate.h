/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AKNoteEditorControllerDelegate <NSObject>
@required
-(CGRect*)stickyViewFrameForNoteEditor:(id)arg1;
-(id)stickyContainerForNoteEditor:(id)arg1;
-(unsigned long long)edgeForNoteEditor:(id)arg1;
-(id)popoverPresentingViewControllerForNoteEditor:(id)arg1;
-(void)noteEditorWillDismissFromFullScreen:(id)arg1;
-(void)noteEditorDidBeginEditing:(id)arg1;
-(void)noteEditorDidFinishEditing:(id)arg1;
-(void)noteEditorWillPresentFullScreen:(id)arg1;
-(BOOL)handleEditAnnotation:(id)arg1;

@end
