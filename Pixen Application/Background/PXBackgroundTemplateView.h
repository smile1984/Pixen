//
//  PXBackgroundTemplateView.h
//  Pixen
//

#import <Cocoa/Cocoa.h>

@class PXBackground, PXBackgroundPreviewView;
@interface PXBackgroundTemplateView : NSView {
  @private
	PXBackground *background;
	IBOutlet NSView *view;
	IBOutlet NSTextField *templateNameField, *templateClassNameField;
	IBOutlet PXBackgroundPreviewView *imageView;
}

@property (nonatomic, retain) PXBackground *background;

@property (nonatomic, readonly) IBOutlet NSTextField *templateNameField;
@property (nonatomic, readonly) IBOutlet NSTextField *templateClassNameField;
@property (nonatomic, readonly) IBOutlet PXBackgroundPreviewView *imageView;

- (void)setHighlighted:(BOOL)highlighted;

@end
