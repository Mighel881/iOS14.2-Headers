/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIKit-Structs.h>
#import <UIKit/___UIRemoteViewAccessibility_super.h>

@interface _UIRemoteViewAccessibility : ___UIRemoteViewAccessibility_super
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
+(id)safeCategoryTargetClassName;
-(id)_accessibilityActiveKeyboard;
-(BOOL)_accessibilityServesAsFirstResponder;
-(id)_accessibilityResponderElement;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)_accessibilitySetFocusOnElement:(BOOL)arg1 ;
-(id)accessibilityElements;
-(id)accessibilityIdentifier;
-(void)_accessibilitySetRetainedValue:(id)arg1 forKey:(id)arg2 ;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)dealloc;
-(void)_accessibilityUnregisterRemoteView;
-(void)_accessibilitySetRemoteElementIfNecessary;
-(id)_accessibilityGetRemoteElementArray;
-(id)_accessibilityRemoteElementCommunicationQueue;
-(void)_accessibilitySetRemoteElementArray:(id)arg1 ;
-(void)_accessibilityTransmitRemoteUUIDToPid:(int)arg1 machPort:(unsigned)arg2 value:(id)arg3 ;
@end
