/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKComponent.h>

@interface WFCustomButtonComponent : CKComponent {

	CGSize _intrinsicSize;

}
+(id)newWithTitles:(const unordered_map<unsigned long, NSString *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, NSString *> > >*)arg1 attributedTitles:(const unordered_map<unsigned long, NSAttributedString *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, NSAttributedString *> > >*)arg2 titleColors:(const unordered_map<unsigned long, UIColor *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, UIColor *> > >*)arg3 images:(const unordered_map<unsigned long, UIImage *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, UIImage *> > >*)arg4 backgroundImages:(const unordered_map<unsigned long, UIImage *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, UIImage *> > >*)arg5 titleFont:(id)arg6 selected:(BOOL)arg7 enabled:(BOOL)arg8 action:(CKTypedComponentAction<UIEvent *>)arg9 size:(const CKComponentSize*)arg10 buttonClass:(const CKComponentViewClass*)arg11 attributes:(const unordered_map<CKComponentViewAttribute, CKBoxedValue, std::__1::hash<CKComponentViewAttribute>, std::__1::equal_to<CKComponentViewAttribute>, std::__1::allocator<std::__1::pair<const CKComponentViewAttribute, CKBoxedValue> > >*)arg12 accessibilityConfiguration:(CKButtonComponentAccessibilityConfiguration)arg13 ;
+(id)newWithTitles:(const unordered_map<unsigned long, NSString *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, NSString *> > >*)arg1 attributedTitles:(const unordered_map<unsigned long, NSAttributedString *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, NSAttributedString *> > >*)arg2 titleColors:(const unordered_map<unsigned long, UIColor *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, UIColor *> > >*)arg3 images:(const unordered_map<unsigned long, UIImage *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, UIImage *> > >*)arg4 backgroundImages:(const unordered_map<unsigned long, UIImage *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, UIImage *> > >*)arg5 titleFont:(id)arg6 selected:(BOOL)arg7 enabled:(BOOL)arg8 action:(CKTypedComponentAction<UIEvent *>)arg9 size:(const CKComponentSize*)arg10 buttonClass:(const CKComponentViewClass*)arg11 attributes:(const unordered_map<CKComponentViewAttribute, CKBoxedValue, std::__1::hash<CKComponentViewAttribute>, std::__1::equal_to<CKComponentViewAttribute>, std::__1::allocator<std::__1::pair<const CKComponentViewAttribute, CKBoxedValue> > >*)arg12 titleLabelAttributes:(const unordered_map<CKComponentViewAttribute, CKBoxedValue, std::__1::hash<CKComponentViewAttribute>, std::__1::equal_to<CKComponentViewAttribute>, std::__1::allocator<std::__1::pair<const CKComponentViewAttribute, CKBoxedValue> > >*)arg13 accessibilityConfiguration:(CKButtonComponentAccessibilityConfiguration)arg14 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
@end
